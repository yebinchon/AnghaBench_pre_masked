
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT64 ;



__attribute__((used)) static UINT64 FUNC_0(UINT64 VAR_0, UINT64 VAR_1, UINT64 VAR_2)
{
    return (VAR_0 / VAR_2) * VAR_1
        + ((VAR_0 % VAR_2) * (VAR_1 / VAR_2))
        + ((VAR_0 % VAR_2) * (VAR_1 % VAR_2)) / VAR_2;
}
