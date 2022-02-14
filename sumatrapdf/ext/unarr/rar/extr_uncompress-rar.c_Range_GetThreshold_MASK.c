
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct CPpmdRAR_RangeDec {int Code; int Range; } ;
typedef int UInt32 ;



__attribute__((used)) static UInt32 FUNC_0(void *VAR_0, UInt32 VAR_1)
{
    struct CPpmdRAR_RangeDec *VAR_2 = VAR_0;
    return VAR_2->Code / (VAR_2->Range /= VAR_1);
}
