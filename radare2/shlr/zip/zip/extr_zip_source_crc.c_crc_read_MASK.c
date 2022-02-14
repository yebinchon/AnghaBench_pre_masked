
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zip_uint64_t ;
typedef void* zip_uint32_t ;
typedef int zip_int64_t ;
typedef int uInt ;
struct zip_stat {int valid; int encryption_method; int comp_method; int comp_size; void* crc; int size; } ;
struct zip_source {int dummy; } ;
struct crc_context {int eof; int * e; int size; void* crc; int validate; } ;
typedef enum zip_source_cmd { ____Placeholder_zip_source_cmd } zip_source_cmd ;
typedef int Bytef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;




 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (void*,int const*,int ) ;
 int FUNC_1 (struct crc_context*) ;
 int FUNC_2 (void*,int *,int) ;
 int FUNC_3 (struct zip_source*,void*,int ) ;
 int FUNC_4 (struct zip_source*,struct zip_stat*) ;

__attribute__((used)) static zip_int64_t
FUNC_5(struct zip_source *VAR_10, void *VAR_11, void *VAR_12,
  zip_uint64_t VAR_13, enum zip_source_cmd VAR_14)
{
    struct crc_context *VAR_15;
    zip_int64_t VAR_16;

    VAR_15 = (struct crc_context *)VAR_11;

    switch (VAR_14) {
    case 130:
 VAR_15->eof = 0;
 VAR_15->crc = (zip_uint32_t)FUNC_0(0, ((void*)0), 0);
 VAR_15->size = 0;

 return 0;

    case 129:
 if (VAR_15->eof || VAR_13 == 0)
     return 0;

 if ((VAR_16=FUNC_3(VAR_10, VAR_12, VAR_13)) < 0)
     return VAR_4;

 if (VAR_16 == 0) {
     VAR_15->eof = 1;
     if (VAR_15->validate) {
  struct zip_stat VAR_17;

  if (FUNC_4(VAR_10, &VAR_17) < 0)
      return VAR_4;

  if ((VAR_17.valid & VAR_7) && VAR_17.crc != VAR_15->crc) {
      VAR_15->e[0] = VAR_2;
      VAR_15->e[1] = 0;

      return -1;
  }
  if ((VAR_17.valid & VAR_9) && VAR_17.size != VAR_15->size) {
      VAR_15->e[0] = VAR_3;
      VAR_15->e[1] = 0;

      return -1;
  }
     }
 }
 else {
     VAR_15->size += (zip_uint64_t)VAR_16;
     VAR_15->crc = (zip_uint32_t)FUNC_0(VAR_15->crc, (const Bytef *)VAR_12, (uInt)VAR_16);
 }
 return VAR_16;

    case 133:
 return 0;

    case 128:
 {
     struct zip_stat *VAR_18;

     VAR_18 = (struct zip_stat *)VAR_12;

     if (VAR_15->eof) {


  VAR_18->size = VAR_15->size;
  VAR_18->crc = VAR_15->crc;
  VAR_18->comp_size = VAR_15->size;
  VAR_18->comp_method = VAR_0;
  VAR_18->encryption_method = VAR_1;
  VAR_18->valid |= VAR_9|VAR_7|VAR_6|VAR_5|VAR_8;;
     }
 }
 return 0;

    case 132:
 FUNC_2(VAR_12, VAR_15->e, sizeof(VAR_15->e));
 return 0;

    case 131:
 FUNC_1(VAR_15);
 return 0;

    default:
 return -1;
    }

}
