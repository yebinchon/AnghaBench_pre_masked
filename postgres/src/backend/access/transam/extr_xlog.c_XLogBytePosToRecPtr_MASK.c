
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;
typedef int uint32 ;
typedef int XLogRecPtr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int,int ,int ) ;
 int VAR_5 ;

__attribute__((used)) static XLogRecPtr
FUNC_1(uint64 VAR_6)
{
 uint64 VAR_7;
 uint64 VAR_8;
 uint64 VAR_9;
 uint32 VAR_10;
 XLogRecPtr VAR_11;

 VAR_7 = VAR_6 / VAR_3;
 VAR_9 = VAR_6 % VAR_3;

 if (VAR_9 < VAR_4 - VAR_0)
 {

  VAR_10 = VAR_9 + VAR_0;
 }
 else
 {

  VAR_10 = VAR_4;
  VAR_9 -= VAR_4 - VAR_0;

  VAR_8 = VAR_9 / VAR_2;
  VAR_9 = VAR_9 % VAR_2;

  VAR_10 += VAR_8 * VAR_4 + VAR_9 + VAR_1;
 }

 FUNC_0(VAR_7, VAR_10, VAR_5, VAR_11);

 return VAR_11;
}
