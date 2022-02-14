
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg_tm {int dummy; } ;
typedef int fsec_t ;
typedef int TimestampTz ;
typedef int Timestamp ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,int*,struct pg_tm*,int *,int *,int *) ;
 scalar_t__ FUNC_5 (struct pg_tm*,int ,int *,int *) ;

__attribute__((used)) static Timestamp
FUNC_6(TimestampTz VAR_2)
{
 Timestamp VAR_3;
 struct pg_tm VAR_4,
      *VAR_5 = &VAR_4;
 fsec_t VAR_6;
 int VAR_7;

 if (FUNC_0(VAR_2))
  VAR_3 = VAR_2;
 else
 {
  if (FUNC_4(VAR_2, &VAR_7, VAR_5, &VAR_6, ((void*)0), ((void*)0)) != 0)
   FUNC_1(VAR_1,
     (FUNC_2(VAR_0),
      FUNC_3("timestamp out of range")));
  if (FUNC_5(VAR_5, VAR_6, ((void*)0), &VAR_3) != 0)
   FUNC_1(VAR_1,
     (FUNC_2(VAR_0),
      FUNC_3("timestamp out of range")));
 }
 return VAR_3;
}
