
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef enum serialize_seek_type { ____Placeholder_serialize_seek_type } serialize_seek_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (void*,int,int) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static int64_t FUNC_2(void *VAR_3, int64_t VAR_4,
          enum serialize_seek_type VAR_5)
{
 int VAR_6 = VAR_2;

 switch (VAR_5) {
 case 128:
  VAR_6 = VAR_2;
  break;
 case 130:
  VAR_6 = VAR_0;
  break;
 case 129:
  VAR_6 = VAR_1;
  break;
 }

 if (FUNC_0(VAR_3, VAR_4, VAR_6) == -1)
  return -1;

 return FUNC_1(VAR_3);
}
