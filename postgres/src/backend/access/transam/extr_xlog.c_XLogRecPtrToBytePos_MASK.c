
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;
typedef int uint32 ;
typedef int XLogRecPtr ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int,int ) ;
 int VAR_4 ;
 int FUNC_2 (int,int ) ;
 int VAR_5 ;

__attribute__((used)) static uint64
FUNC_3(XLogRecPtr VAR_6)
{
 uint64 VAR_7;
 uint32 VAR_8;
 uint32 VAR_9;
 uint64 VAR_10;

 FUNC_1(VAR_6, VAR_7, VAR_5);

 VAR_8 = (FUNC_2(VAR_6, VAR_5)) / VAR_4;
 VAR_9 = VAR_6 % VAR_4;

 if (VAR_8 == 0)
 {
  VAR_10 = VAR_7 * VAR_3;
  if (VAR_9 > 0)
  {
   FUNC_0(VAR_9 >= VAR_0);
   VAR_10 += VAR_9 - VAR_0;
  }
 }
 else
 {
  VAR_10 = VAR_7 * VAR_3 +
   (VAR_4 - VAR_0) +
   (VAR_8 - 1) * VAR_2;
  if (VAR_9 > 0)
  {
   FUNC_0(VAR_9 >= VAR_1);
   VAR_10 += VAR_9 - VAR_1;
  }
 }

 return VAR_10;
}
