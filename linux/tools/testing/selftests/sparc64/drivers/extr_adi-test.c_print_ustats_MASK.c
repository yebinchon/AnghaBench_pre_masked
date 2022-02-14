
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stats {scalar_t__ count; scalar_t__ bytes; scalar_t__ total; int name; } ;


 int FUNC_0 (char*,int ,scalar_t__,float,float) ;

__attribute__((used)) static void FUNC_1(const struct stats * const VAR_0)
{
 FUNC_0("%s\t%7d\t%7.0f\t%7.0f\n",
         VAR_0->name, VAR_0->count,
         (float)VAR_0->total / (float)VAR_0->count,
         (float)VAR_0->bytes / (float)VAR_0->count);
}
