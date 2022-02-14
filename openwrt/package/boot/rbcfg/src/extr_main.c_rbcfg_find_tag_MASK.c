
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct rbcfg_ctx {char* buf; unsigned int buflen; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (char*) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_2(struct rbcfg_ctx *VAR_4, uint16_t VAR_5, uint16_t *VAR_6,
        void **VAR_7)
{
 uint16_t VAR_8;
 uint16_t VAR_9;
 char *VAR_10 = VAR_4->buf;
 unsigned int VAR_11 = VAR_4->buflen;
 int VAR_12 = VAR_0;


 VAR_10 += 8;
 VAR_11 -= 8;

 while (VAR_11 > 2) {
  VAR_9 = FUNC_1(VAR_10);
  VAR_10 += 2;
  VAR_11 -= 2;

  if (VAR_11 < 2)
   break;

  VAR_8 = FUNC_1(VAR_10);
  VAR_10 += 2;
  VAR_11 -= 2;

  if (VAR_8 == VAR_2) {
   VAR_12 = VAR_1;
   break;
  }

  if (VAR_11 < VAR_9)
   break;

  if (VAR_8 == VAR_5) {
   *VAR_6 = VAR_9;
   *VAR_7 = VAR_10;
   VAR_12 = 0;
   break;
  }

  VAR_10 += VAR_9;
  VAR_11 -= VAR_9;
 }

 if (VAR_0 == VAR_12)
  FUNC_0(VAR_3, "no tag found with id=%ld\n", VAR_5);

 return VAR_12;
}
