
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_output_data {int file; } ;
typedef int int64_t ;
typedef enum serialize_seek_type { ____Placeholder_serialize_seek_type } serialize_seek_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int64_t FUNC_2(void *VAR_3, int64_t VAR_4,
    enum serialize_seek_type VAR_5)
{
 struct file_output_data *VAR_6 = VAR_3;
 int VAR_7 = VAR_2;

 switch (VAR_5) {
 case 128:
  VAR_7 = VAR_2;
  break;
 case 130:
  VAR_7 = VAR_0;
  break;
 case 129:
  VAR_7 = VAR_1;
  break;
 }

 if (FUNC_0(VAR_6->file, VAR_4, VAR_7) == -1)
  return -1;

 return FUNC_1(VAR_6->file);
}
