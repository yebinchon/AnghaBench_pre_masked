
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tmsize_t ;
struct TYPE_3__ {int tif_name; int tif_clientdata; } ;
typedef TYPE_1__ TIFF ;


 int FUNC_0 (int ,int ,char*,char const*,long,long) ;
 void* FUNC_1 (void*,int) ;

void*
FUNC_2(TIFF* VAR_0, void* VAR_1,
    tmsize_t VAR_2, tmsize_t VAR_3, const char* VAR_4)
{
 void* VAR_5 = ((void*)0);
 tmsize_t VAR_6 = VAR_2 * VAR_3;




 if (VAR_2 && VAR_3 && VAR_6 / VAR_3 == VAR_2)
  VAR_5 = FUNC_1(VAR_1, VAR_6);

 if (VAR_5 == ((void*)0)) {
  FUNC_0(VAR_0->tif_clientdata, VAR_0->tif_name,
        "Failed to allocate memory for %s "
        "(%ld elements of %ld bytes each)",
        VAR_4,(long) VAR_2, (long) VAR_3);
 }

 return VAR_5;
}
