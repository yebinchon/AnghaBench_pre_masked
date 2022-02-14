
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int distance; int length; } ;
typedef TYPE_1__ QueryOperand ;


 int FUNC_0 (char*,int ,char*,int ,int) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1, void *VAR_2)
{
 char *VAR_3 = (char *) VAR_2;
 QueryOperand *VAR_4 = (*(QueryOperand *const *) VAR_0);
 QueryOperand *VAR_5 = (*(QueryOperand *const *) VAR_1);

 return FUNC_0(VAR_3 + VAR_4->distance, VAR_4->length,
         VAR_3 + VAR_5->distance, VAR_5->length,
         0);
}
