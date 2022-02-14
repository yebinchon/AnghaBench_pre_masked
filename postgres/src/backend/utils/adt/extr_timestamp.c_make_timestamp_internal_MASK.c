
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg_tm {int tm_year; int tm_mon; int tm_mday; } ;
typedef scalar_t__ Timestamp ;
typedef scalar_t__ TimeOffset ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 double VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,int,int,int,struct pg_tm*) ;
 scalar_t__ FUNC_3 (int,int,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int,int,int,...) ;
 scalar_t__ FUNC_7 (double) ;
 scalar_t__ FUNC_8 (double) ;

__attribute__((used)) static Timestamp
FUNC_9(int VAR_10, int VAR_11, int VAR_12,
      int VAR_13, int VAR_14, double VAR_15)
{
 struct pg_tm VAR_16;
 TimeOffset VAR_17;
 TimeOffset VAR_18;
 int VAR_19;
 Timestamp VAR_20;

 VAR_16.tm_year = VAR_10;
 VAR_16.tm_mon = VAR_11;
 VAR_16.tm_mday = VAR_12;





 VAR_19 = FUNC_2(VAR_0, 0, 0, 0, &VAR_16);

 if (VAR_19 != 0)
  FUNC_4(VAR_3,
    (FUNC_5(VAR_1),
     FUNC_6("date field value out of range: %d-%02d-%02d",
      VAR_10, VAR_11, VAR_12)));

 if (!FUNC_0(VAR_16.tm_year, VAR_16.tm_mon, VAR_16.tm_mday))
  FUNC_4(VAR_3,
    (FUNC_5(VAR_2),
     FUNC_6("date out of range: %d-%02d-%02d",
      VAR_10, VAR_11, VAR_12)));

 VAR_17 = FUNC_3(VAR_16.tm_year, VAR_16.tm_mon, VAR_16.tm_mday) - VAR_6;







 if (VAR_13 < 0 || VAR_14 < 0 || VAR_14 > VAR_5 - 1 ||
  FUNC_7(VAR_15) ||
  VAR_15 < 0 || VAR_15 > VAR_7 ||
  VAR_13 > VAR_4 ||

  (VAR_13 == VAR_4 && (VAR_14 > 0 || VAR_15 > 0)))
  FUNC_4(VAR_3,
    (FUNC_5(VAR_1),
     FUNC_6("time field value out of range: %d:%02d:%02g",
      VAR_13, VAR_14, VAR_15)));


 VAR_18 = (((VAR_13 * VAR_5 + VAR_14) * VAR_7)
   * VAR_9) + FUNC_8(VAR_15 * VAR_9);

 VAR_20 = VAR_17 * VAR_8 + VAR_18;

 if ((VAR_20 - VAR_18) / VAR_8 != VAR_17)
  FUNC_4(VAR_3,
    (FUNC_5(VAR_2),
     FUNC_6("timestamp out of range: %d-%02d-%02d %d:%02d:%02g",
      VAR_10, VAR_11, VAR_12,
      VAR_13, VAR_14, VAR_15)));



 if ((VAR_20 < 0 && VAR_17 > 0) ||
  (VAR_20 > 0 && VAR_17 < -1))
  FUNC_4(VAR_3,
    (FUNC_5(VAR_2),
     FUNC_6("timestamp out of range: %d-%02d-%02d %d:%02d:%02g",
      VAR_10, VAR_11, VAR_12,
      VAR_13, VAR_14, VAR_15)));


 if (!FUNC_1(VAR_20))
  FUNC_4(VAR_3,
    (FUNC_5(VAR_2),
     FUNC_6("timestamp out of range: %d-%02d-%02d %d:%02d:%02g",
      VAR_10, VAR_11, VAR_12,
      VAR_13, VAR_14, VAR_15)));

 return VAR_20;
}
