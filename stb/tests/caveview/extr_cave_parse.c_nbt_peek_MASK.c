
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* cur; char* temp_buffer; } ;
typedef TYPE_1__ nbt ;


 unsigned char VAR_0 ;
 int FUNC_0 (unsigned char*,char*,int) ;

__attribute__((used)) static char *FUNC_1(nbt *VAR_1)
{
   unsigned char VAR_2 = *VAR_1->cur;
   if (VAR_2 == VAR_0)
      return ((void*)0);
   FUNC_0(VAR_1->cur+1, VAR_1->temp_buffer, sizeof(VAR_1->temp_buffer));
   return VAR_1->temp_buffer;
}
