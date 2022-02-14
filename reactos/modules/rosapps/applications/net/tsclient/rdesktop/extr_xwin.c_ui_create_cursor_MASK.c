
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_8__ {int red; int blue; int green; int flags; } ;
typedef TYPE_1__ XColor ;
struct TYPE_9__ {int display; } ;
typedef TYPE_2__ RDPCLIENT ;
typedef int Pixmap ;
typedef scalar_t__ HGLYPH ;
typedef int HCURSOR ;
typedef int Cursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,TYPE_1__*,TYPE_1__*,unsigned int,unsigned int) ;
 int FUNC_1 (int*,int ,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int,int,int*) ;
 int FUNC_3 (TYPE_2__*,scalar_t__) ;
 int FUNC_4 (int*) ;
 scalar_t__ FUNC_5 (int) ;

HCURSOR
FUNC_6(RDPCLIENT * VAR_3, unsigned int VAR_4, unsigned int VAR_5, int VAR_6, int VAR_7,
   uint8 * VAR_8, uint8 * VAR_9)
{
 HGLYPH VAR_10, VAR_11;
 XColor VAR_12, VAR_13;
 Cursor VAR_14;
 uint8 *VAR_15, *VAR_16;
 uint8 *VAR_17, *VAR_18;
 uint8 VAR_19;
 int VAR_20, VAR_21;
 int VAR_22, VAR_23;

 VAR_20 = (VAR_6 + 7) / 8;
 VAR_21 = VAR_20 * VAR_7;

 VAR_15 = (uint8 *) FUNC_5(VAR_21);
 FUNC_1(VAR_15, 0, VAR_21);

 VAR_17 = (uint8 *) FUNC_5(VAR_21);
 FUNC_1(VAR_17, 0, VAR_21);


 for (VAR_22 = 0; VAR_22 < VAR_7; VAR_22++)
 {
  VAR_21 -= VAR_20;
  VAR_16 = &VAR_15[VAR_21];
  VAR_18 = &VAR_17[VAR_21];

  for (VAR_23 = 0; VAR_23 < VAR_20; VAR_23++)
  {
   for (VAR_19 = 0x80; VAR_19 != 0; VAR_19 >>= 1)
   {
    if (VAR_9[0] || VAR_9[1] || VAR_9[2])
    {
     *VAR_16 |= (~(*VAR_8) & VAR_19);
     *VAR_18 |= VAR_19;
    }
    else
    {
     *VAR_16 |= ((*VAR_8) & VAR_19);
     *VAR_18 |= (~(*VAR_8) & VAR_19);
    }

    VAR_9 += 3;
   }

   VAR_8++;
   VAR_16++;
   VAR_18++;
  }
 }

 VAR_13.red = VAR_13.blue = VAR_13.green = 0xffff;
 VAR_12.red = VAR_12.blue = VAR_12.green = 0x0000;
 VAR_13.flags = VAR_12.flags = VAR_2 | VAR_0 | VAR_1;

 VAR_11 = FUNC_2(VAR_3, VAR_6, VAR_7, VAR_15);
 VAR_10 = FUNC_2(VAR_3, VAR_6, VAR_7, VAR_17);

 VAR_14 =
  FUNC_0(VAR_3->display, (Pixmap) VAR_11,
        (Pixmap) VAR_10, &VAR_13, &VAR_12, VAR_4, VAR_5);

 FUNC_3(VAR_3, VAR_10);
 FUNC_3(VAR_3, VAR_11);
 FUNC_4(VAR_17);
 FUNC_4(VAR_15);
 return (HCURSOR) VAR_14;
}
