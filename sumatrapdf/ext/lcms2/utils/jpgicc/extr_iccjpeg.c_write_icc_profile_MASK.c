
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int j_compress_ptr ;
typedef int JOCTET ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,int const) ;
 int FUNC_1 (int ,int ,unsigned int) ;

void
FUNC_2 (j_compress_ptr VAR_3,
     const JOCTET *VAR_4,
     unsigned int VAR_5)
{
  unsigned int VAR_6;
  int VAR_7 = 1;
  unsigned int VAR_8;


  VAR_6 = VAR_5 / VAR_2;
  if (VAR_6 * VAR_2 != VAR_5)
    VAR_6++;

  while (VAR_5 > 0) {

    VAR_8 = VAR_5;
    if (VAR_8 > VAR_2)
      VAR_8 = VAR_2;
    VAR_5 -= VAR_8;


    FUNC_1(VAR_3, VAR_0,
   (unsigned int) (VAR_8 + VAR_1));





    FUNC_0(VAR_3, 0x49);
    FUNC_0(VAR_3, 0x43);
    FUNC_0(VAR_3, 0x43);
    FUNC_0(VAR_3, 0x5F);
    FUNC_0(VAR_3, 0x50);
    FUNC_0(VAR_3, 0x52);
    FUNC_0(VAR_3, 0x4F);
    FUNC_0(VAR_3, 0x46);
    FUNC_0(VAR_3, 0x49);
    FUNC_0(VAR_3, 0x4C);
    FUNC_0(VAR_3, 0x45);
    FUNC_0(VAR_3, 0x0);


    FUNC_0(VAR_3, VAR_7);
    FUNC_0(VAR_3, (int) VAR_6);


    while (VAR_8--) {
      FUNC_0(VAR_3, *VAR_4);
      VAR_4++;
    }
    VAR_7++;
  }
}
