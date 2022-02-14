
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

int FUNC_4 (int VAR_4, int VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 VAR_6 = VAR_0 - FUNC_0(VAR_5);
 VAR_7 = VAR_0 - FUNC_0(VAR_4);

 VAR_8 = VAR_3 - (VAR_6 * (VAR_3 - FUNC_3(VAR_5))) / VAR_0;
 VAR_9 = VAR_3 - (VAR_7 * (VAR_3 - FUNC_3(VAR_4))) / VAR_0;
 VAR_10 = VAR_2 - (VAR_6 * (VAR_2 - FUNC_2(VAR_5))) / VAR_0;
 VAR_11 = VAR_2 - (VAR_7 * (VAR_2 - FUNC_2(VAR_4))) / VAR_0;
 VAR_12 = VAR_1 - (VAR_6 * (VAR_1 - FUNC_1(VAR_5))) / VAR_0;
 VAR_13 = VAR_1 - (VAR_7 * (VAR_1 - FUNC_1(VAR_4))) / VAR_0 ;

 VAR_6 = VAR_0 - VAR_6;
 VAR_7 = VAR_0 - VAR_7;
 return ( ((VAR_6*VAR_7/VAR_0) << 24) +
    ((VAR_8*VAR_9/VAR_3) << 16) +
    ((VAR_10*VAR_11/VAR_2) << 8) +
    ((VAR_12*VAR_13/VAR_1))
  );
}
