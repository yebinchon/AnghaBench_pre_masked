
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UInt64 ;
typedef int UInt32 ;
struct TYPE_3__ {int Low; scalar_t__ High; } ;
typedef TYPE_1__ CNtfsFileTime ;
typedef int Byte ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char*,unsigned int,int) ;

__attribute__((used)) static void FUNC_1(const CNtfsFileTime *VAR_3, char *VAR_4)
{
  unsigned VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
  UInt64 VAR_11 = (VAR_3->Low | ((UInt64)VAR_3->High << 32)) / 10000000;
  Byte VAR_12[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
  unsigned VAR_13;
  UInt32 VAR_14;
  VAR_10 = (unsigned)(VAR_11 % 60); VAR_11 /= 60;
  VAR_9 = (unsigned)(VAR_11 % 60); VAR_11 /= 60;
  VAR_8 = (unsigned)(VAR_11 % 24); VAR_11 /= 24;

  VAR_14 = (UInt32)VAR_11;

  VAR_5 = (unsigned)(1601 + VAR_14 / VAR_2 * 400);
  VAR_14 %= VAR_2;

  VAR_13 = VAR_14 / VAR_0; if (VAR_13 == 4) VAR_13 = 3; VAR_5 += VAR_13 * 100; VAR_14 -= VAR_13 * VAR_0;
  VAR_13 = VAR_14 / VAR_1; if (VAR_13 == 25) VAR_13 = 24; VAR_5 += VAR_13 * 4; VAR_14 -= VAR_13 * VAR_1;
  VAR_13 = VAR_14 / 365; if (VAR_13 == 4) VAR_13 = 3; VAR_5 += VAR_13; VAR_14 -= VAR_13 * 365;

  if (VAR_5 % 4 == 0 && (VAR_5 % 100 != 0 || VAR_5 % 400 == 0))
    VAR_12[1] = 29;
  for (VAR_6 = 1; VAR_6 <= 12; VAR_6++)
  {
    unsigned VAR_15 = VAR_12[VAR_6 - 1];
    if (VAR_14 < VAR_15)
      break;
    VAR_14 -= VAR_15;
  }
  VAR_7 = (unsigned)VAR_14 + 1;
  VAR_4 = FUNC_0(VAR_4, VAR_5, 4); *VAR_4++ = '-';
  VAR_4 = FUNC_0(VAR_4, VAR_6, 2); *VAR_4++ = '-';
  VAR_4 = FUNC_0(VAR_4, VAR_7, 2); *VAR_4++ = ' ';
  VAR_4 = FUNC_0(VAR_4, VAR_8, 2); *VAR_4++ = ':';
  VAR_4 = FUNC_0(VAR_4, VAR_9, 2); *VAR_4++ = ':';
  VAR_4 = FUNC_0(VAR_4, VAR_10, 2);
}
