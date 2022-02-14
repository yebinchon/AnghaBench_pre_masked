
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zip_uint8_t ;
typedef int zip_uint64_t ;
typedef int zip_int64_t ;
struct zip_stat {int valid; int comp_size; int encryption_method; } ;
struct zip_source {int dummy; } ;
struct trad_pkware {int * e; } ;
typedef enum zip_source_cmd { ____Placeholder_zip_source_cmd } zip_source_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct trad_pkware*,int *,int *,int ,int ) ;
 int FUNC_1 (struct zip_source*,struct trad_pkware*) ;
 int FUNC_2 (void*,int *,int) ;
 int FUNC_3 (struct trad_pkware*) ;
 int FUNC_4 (struct zip_source*,void*,int ) ;

__attribute__((used)) static zip_int64_t
FUNC_5(struct zip_source *VAR_6, void *VAR_7, void *VAR_8,
        zip_uint64_t VAR_9, enum zip_source_cmd VAR_10)
{
    struct trad_pkware *VAR_11;
    zip_int64_t VAR_12;

    VAR_11 = (struct trad_pkware *)VAR_7;

    switch (VAR_10) {
    case 130:
 if (FUNC_1(VAR_6, VAR_11) < 0)
     return -1;
 return 0;

    case 129:
 if ((VAR_12=FUNC_4(VAR_6, VAR_8, VAR_9)) < 0)
     return VAR_3;

 FUNC_0((struct trad_pkware *)VAR_7, (zip_uint8_t *)VAR_8, (zip_uint8_t *)VAR_8, (zip_uint64_t)VAR_12,
  0);
 return VAR_12;

    case 133:
 return 0;

    case 128:
 {
     struct zip_stat *VAR_13;

     VAR_13 = (struct zip_stat *)VAR_8;

     VAR_13->encryption_method = VAR_1;
     VAR_13->valid |= VAR_5;

     if (VAR_13->valid & VAR_4)
  VAR_13->comp_size -= VAR_0;
 }
 return 0;

    case 132:
 FUNC_2(VAR_8, VAR_11->e, sizeof(int)*2);
 return sizeof(int)*2;

    case 131:
 FUNC_3(VAR_11);
 return 0;

    default:
 VAR_11->e[0] = VAR_2;
 VAR_11->e[1] = 0;
 return -1;
    }
}
