
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct tomoyo_io_buffer {char* write_buf; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*,char*,int *) ;
 char** VAR_1 ;
 int * VAR_2 ;
 scalar_t__ FUNC_1 (char**,char*) ;

__attribute__((used)) static int FUNC_2(struct tomoyo_io_buffer *VAR_3)
{
 char *VAR_4 = VAR_3->write_buf;
 u8 VAR_5;

 if (FUNC_1(&VAR_4, "Memory used by "))
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
   if (FUNC_1(&VAR_4, VAR_1[VAR_5]))
    FUNC_0(VAR_4, "%u", &VAR_2[VAR_5]);
 return 0;
}
