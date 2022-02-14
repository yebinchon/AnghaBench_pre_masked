
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uac3_clock_source_descriptor {int bClockID; } ;



__attribute__((used)) static bool FUNC_0(void *VAR_0, int VAR_1)
{
 struct uac3_clock_source_descriptor *VAR_2 = VAR_0;
 return VAR_2->bClockID == VAR_1;
}
