
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16 ;
struct TYPE_3__ {int (* init ) (int *,int) ;} ;
typedef TYPE_1__ TIFFCodec ;
typedef int TIFF ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

int
FUNC_3(TIFF* VAR_0, int VAR_1)
{
 const TIFFCodec *VAR_2 = FUNC_0((uint16) VAR_1);

 FUNC_1(VAR_0);






 return (VAR_2 ? (*VAR_2->init)(VAR_0, VAR_1) : 1);
}
