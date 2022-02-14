
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bmp_map {int dummy; } ;
struct bmp_file {char* signature; int size; int offset; } ;
struct bmp_dib {int size; int depth; int compression; int x; int y; int colors_used; } ;
typedef int UINTN ;
typedef int UINT8 ;
typedef int UINT32 ;
typedef int EFI_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

EFI_STATUS FUNC_0(UINT8 *VAR_3, UINTN VAR_4, struct bmp_dib **VAR_5,
                            struct bmp_map **VAR_6, UINT8 **VAR_7) {
        struct bmp_file *VAR_8;
        struct bmp_dib *VAR_9;
        struct bmp_map *VAR_10;
        UINTN VAR_11;

        if (VAR_4 < sizeof(struct bmp_file) + sizeof(struct bmp_dib))
                return VAR_0;


        VAR_8 = (struct bmp_file *)VAR_3;
        if (VAR_8->signature[0] != 'B' || VAR_8->signature[1] != 'M')
                return VAR_0;
        if (VAR_8->size != VAR_4)
                return VAR_0;
        if (VAR_8->size < VAR_8->offset)
                return VAR_0;


        VAR_9 = (struct bmp_dib *)(VAR_3 + sizeof(struct bmp_file));
        if (VAR_9->size < sizeof(struct bmp_dib))
                return VAR_2;

        switch (VAR_9->depth) {
        case 1:
        case 4:
        case 8:
        case 24:
                if (VAR_9->compression != 0)
                        return VAR_2;

                break;

        case 16:
        case 32:
                if (VAR_9->compression != 0 && VAR_9->compression != 3)
                        return VAR_2;

                break;

        default:
                return VAR_2;
        }

        VAR_11 = ((UINTN) VAR_9->depth * VAR_9->x + 31) / 32 * 4;
        if (VAR_8->size - VAR_8->offset < VAR_9->y * VAR_11)
                return VAR_0;
        if (VAR_11 * VAR_9->y > 64 * 1024 * 1024)
                return VAR_0;


        VAR_10 = (struct bmp_map *)(VAR_3 + sizeof(struct bmp_file) + VAR_9->size);
        if (VAR_8->offset < sizeof(struct bmp_file) + VAR_9->size)
                return VAR_0;

        if (VAR_8->offset > sizeof(struct bmp_file) + VAR_9->size) {
                UINT32 VAR_12;
                UINTN VAR_13;

                if (VAR_9->colors_used)
                        VAR_12 = VAR_9->colors_used;
                else {
                        switch (VAR_9->depth) {
                        case 1:
                        case 4:
                        case 8:
                                VAR_12 = 1 << VAR_9->depth;
                                break;

                        default:
                                VAR_12 = 0;
                                break;
                        }
                }

                VAR_13 = VAR_8->offset - (sizeof(struct bmp_file) + VAR_9->size);
                if (VAR_13 != sizeof(struct bmp_map) * VAR_12)
                        return VAR_0;
        }

        *VAR_6 = VAR_10;
        *VAR_5 = VAR_9;
        *VAR_7 = VAR_3 + VAR_8->offset;

        return VAR_1;
}
