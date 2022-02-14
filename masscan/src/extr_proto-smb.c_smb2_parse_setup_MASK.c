
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int state; size_t struct_length; size_t offset; unsigned char blob_offset; unsigned char blob_length; } ;
struct TYPE_4__ {TYPE_1__ smb2; } ;
struct SMBSTUFF {TYPE_2__ hdr; } ;
struct BannerOutput {int dummy; } ;


 int FUNC_0 (struct BannerOutput*) ;

__attribute__((used)) static size_t
FUNC_1(struct SMBSTUFF *VAR_0, const unsigned char *VAR_1, size_t VAR_2, size_t VAR_3, struct BannerOutput *VAR_4)
{
    size_t VAR_5 = VAR_2;
    unsigned VAR_6 = VAR_0->hdr.smb2.state;
    enum {
        N_FLAGS1, N_FLAGS2,
        N_BLOB_OFFSET1, N_BLOB_OFFSET2,
        N_BLOB_LENGTH1, N_BLOB_LENGTH2,

    };

    FUNC_0(VAR_4);

    if (VAR_3 > VAR_2 + (VAR_0->hdr.smb2.struct_length - VAR_0->hdr.smb2.offset))
        VAR_3 = VAR_2 + (VAR_0->hdr.smb2.struct_length - VAR_0->hdr.smb2.offset);

    for (;VAR_2<VAR_3; VAR_2++)
        switch (VAR_6) {
            case N_FLAGS1: case N_FLAGS2:
                VAR_6++;
                break;
            case N_BLOB_OFFSET1:
                VAR_0->hdr.smb2.blob_offset = VAR_1[VAR_2];
                VAR_6++;
                break;
            case N_BLOB_OFFSET2:
                VAR_0->hdr.smb2.blob_offset |= (VAR_1[VAR_2]<<8);
                VAR_6++;
                break;
            case N_BLOB_LENGTH1:
                VAR_0->hdr.smb2.blob_length = VAR_1[VAR_2];
                VAR_6++;
                break;
            case N_BLOB_LENGTH2:
                VAR_0->hdr.smb2.blob_length |= (VAR_1[VAR_2]<<8);
                VAR_6++;
                break;
            default:
                break;
        }

    VAR_0->hdr.smb2.state = (unsigned short)VAR_6;
    VAR_0->hdr.smb2.offset += (unsigned short)(VAR_2 - VAR_5);
    return VAR_2 - VAR_5;
}
