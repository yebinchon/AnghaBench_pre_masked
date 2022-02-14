
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zip_uint64_t ;
typedef int zip_int64_t ;
typedef int uInt ;
struct zip_stat {int size; int comp_size; int comp_method; } ;
struct zip_source {int dummy; } ;
struct TYPE_3__ {int avail_in; int * next_in; int * opaque; void* zfree; void* zalloc; } ;
struct deflate {int* e; TYPE_1__ zstr; scalar_t__ buffer; } ;
typedef enum zip_source_cmd { ____Placeholder_zip_source_cmd } zip_source_cmd ;
typedef int Bytef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;




 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct zip_source*,struct deflate*,void*,int) ;
 int FUNC_1 (struct deflate*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (void*,int*,int) ;
 int FUNC_5 (struct zip_source*,scalar_t__,int) ;

__attribute__((used)) static zip_int64_t
FUNC_6(struct zip_source *VAR_7, void *VAR_8, void *VAR_9,
     zip_uint64_t VAR_10, enum zip_source_cmd VAR_11)
{
    struct deflate *VAR_12;
    zip_int64_t VAR_13;
    int VAR_14;

    VAR_12 = (struct deflate *)VAR_8;

    switch (VAR_11) {
    case 130:
 if ((VAR_13=FUNC_5(VAR_7, VAR_12->buffer, sizeof(VAR_12->buffer))) < 0)
     return VAR_4;

 VAR_12->zstr.zalloc = VAR_5;
 VAR_12->zstr.zfree = VAR_5;
 VAR_12->zstr.opaque = ((void*)0);
 VAR_12->zstr.next_in = (Bytef *)VAR_12->buffer;
 VAR_12->zstr.avail_in = (uInt)VAR_13 ;


 if ((VAR_14=FUNC_3(&VAR_12->zstr, -VAR_0)) != VAR_6) {
     VAR_12->e[0] = VAR_3;
     VAR_12->e[1] = VAR_14;

     return -1;
 }
 return 0;

    case 129:
 return FUNC_0(VAR_7, VAR_12, VAR_9, VAR_10);

    case 133:
 FUNC_2(&VAR_12->zstr);
 return 0;

    case 128:
 {
     struct zip_stat *VAR_15;

     VAR_15 = (struct zip_stat *)VAR_9;

     VAR_15->comp_method = VAR_1;
     if (VAR_15->comp_size > 0 && VAR_15->size > 0)
  VAR_15->comp_size = VAR_15->size;
 }
 return 0;

    case 132:
 if (VAR_10 < sizeof(int)*2)
     return -1;

 FUNC_4(VAR_9, VAR_12->e, sizeof(int)*2);
 return sizeof(int)*2;

    case 131:

 FUNC_1(VAR_12);
 return 0;

    default:
 VAR_12->e[0] = VAR_2;
 VAR_12->e[1] = 0;
 return -1;
    }

}
