
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
struct TYPE_3__ {unsigned long long hi; unsigned long long lo; } ;
typedef TYPE_1__ ipv6address ;


 unsigned int FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (char const) ;
 int FUNC_3 (char const) ;
 int FUNC_4 (unsigned char*,unsigned char*,unsigned int) ;
 int FUNC_5 (unsigned char*,int ,int) ;
 unsigned char VAR_0 ;

__attribute__((used)) static int
FUNC_6(const char *VAR_1, unsigned *VAR_2, size_t VAR_3, ipv6address *VAR_4)
{
 unsigned VAR_5 = *VAR_2;
 unsigned VAR_6 = 0;
 unsigned VAR_7 = (unsigned)~0;
 unsigned VAR_8 = 0;

    unsigned char VAR_9[16];





 while (VAR_5 < VAR_3 && FUNC_2(VAR_1[VAR_5]))
  VAR_5++;


 if (VAR_5 < VAR_3 && VAR_1[VAR_5] == '[') {
  VAR_6 = 1;
  VAR_5++;


  while (VAR_5 < VAR_3 && FUNC_2(VAR_1[VAR_5]))
   VAR_5++;
 }


 while (VAR_5 < VAR_3) {
  unsigned VAR_10;
  unsigned VAR_11 = 0;


  if (VAR_8 >= 16)
   break;


  if (VAR_1[VAR_5] == ':' && VAR_7 < 16) {
   VAR_7 = VAR_8;
   VAR_5++;
   continue;
  }


  VAR_10=0;
  while (VAR_5 < VAR_3) {
   if (VAR_10 >= 4)
    break;
   if (VAR_1[VAR_5] == ':')
    break;
   if (!FUNC_3(VAR_1[VAR_5])) {
    break;
   }

   VAR_11 <<= 4;
   VAR_11 |= FUNC_0(VAR_1[VAR_5++]);
   VAR_10++;
  }


  if (VAR_10 == 0)
   break;


  VAR_9[VAR_8+0] = (unsigned char)(VAR_11>>8);
  VAR_9[VAR_8+1] = (unsigned char)(VAR_11>>0);
  VAR_8 += 2;


  if (VAR_5 < VAR_3 && VAR_1[VAR_5] == ':') {
   VAR_5++;
   continue;
  }


  if (VAR_5 < VAR_3 && VAR_6 && VAR_1[VAR_5] == ']') {
   VAR_5++;

   break;
  }



  if (VAR_8 == 16)
   break;


  if (VAR_7 != (unsigned)(~0))
   break;


  if (VAR_5 == VAR_3)
   break;



  return -1;
 }


 if (VAR_7 != ~0) {
  if (VAR_8 == 16) {

   return -1;
  }

  FUNC_4(VAR_9 + VAR_7 + 16 - VAR_8,
    VAR_9 + VAR_7,
    VAR_8 - VAR_7);
  FUNC_5( VAR_9 + VAR_7,
    0,
    16-VAR_8);
 }
    VAR_4->hi = (((uint64_t)VAR_9[0]) << 56ULL)
                    | ((uint64_t)VAR_9[1] << 48ULL)
                    | ((uint64_t)VAR_9[2] << 40ULL)
                    | ((uint64_t)VAR_9[3] << 32ULL)
                    | ((uint64_t)VAR_9[4] << 24ULL)
                    | ((uint64_t)VAR_9[5] << 16ULL)
                    | ((uint64_t)VAR_9[6] << 8ULL)
                    | ((uint64_t)VAR_9[7] << 0ULL);
    VAR_4->lo = ((uint64_t)VAR_9[ 8] << 56ULL)
                    | ((uint64_t)VAR_9[ 9] << 48ULL)
                    | ((uint64_t)VAR_9[10] << 40ULL)
                    | ((uint64_t)VAR_9[11] << 32ULL)
                    | ((uint64_t)VAR_9[12] << 24ULL)
                    | ((uint64_t)VAR_9[13] << 16ULL)
                    | ((uint64_t)VAR_9[14] << 8ULL)
                    | ((uint64_t)VAR_9[15] << 0ULL);

    *VAR_2 = VAR_5;


    {


    }
    return 1;
}
