
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Timestamp ;
typedef int FmgrInfo ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int const) ;
 int VAR_0 ;

__attribute__((used)) static bool
FUNC_3(const void *VAR_1, const void *VAR_2, FmgrInfo *VAR_3)
{
 const Timestamp *VAR_4 = (const Timestamp *) VAR_1;
 const Timestamp *VAR_5 = (const Timestamp *) VAR_2;

 return FUNC_0(FUNC_1(VAR_0,
           FUNC_2(*VAR_4),
           FUNC_2(*VAR_5)));
}
