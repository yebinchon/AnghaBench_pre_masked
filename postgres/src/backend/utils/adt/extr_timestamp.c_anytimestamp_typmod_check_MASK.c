
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,scalar_t__,char*,...) ;

int32
FUNC_3(bool VAR_4, int32 VAR_5)
{
 if (VAR_5 < 0)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("TIMESTAMP(%d)%s precision must not be negative",
      VAR_5, (VAR_4 ? " WITH TIME ZONE" : ""))));
 if (VAR_5 > VAR_2)
 {
  FUNC_0(VAR_3,
    (FUNC_1(VAR_0),
     FUNC_2("TIMESTAMP(%d)%s precision reduced to maximum allowed, %d",
      VAR_5, (VAR_4 ? " WITH TIME ZONE" : ""),
      VAR_2)));
  VAR_5 = VAR_2;
 }

 return VAR_5;
}
