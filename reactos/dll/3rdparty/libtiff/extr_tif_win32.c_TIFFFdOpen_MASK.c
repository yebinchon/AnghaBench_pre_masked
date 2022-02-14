
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int thandle_t ;
struct TYPE_4__ {int tif_fd; } ;
typedef TYPE_1__ TIFF ;


 TYPE_1__* FUNC_0 (char const*,char const*,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

TIFF*
FUNC_1(int VAR_9, const char* VAR_10, const char* VAR_11)
{
 TIFF* VAR_12;
 int VAR_13;
 int VAR_14;
 VAR_13=0;
 for (VAR_14=0; VAR_11[VAR_14]!=0; VAR_14++)
 {
  if (VAR_11[VAR_14]=='u')
  {
   VAR_13=1;
   break;
  }
 }
 VAR_12 = FUNC_0(VAR_10, VAR_11, (thandle_t)VAR_9,
   VAR_4, VAR_8,
   VAR_5, VAR_0, VAR_6,
   VAR_13 ? VAR_1 : VAR_3,
   VAR_13 ? VAR_2 : VAR_7);
 if (VAR_12)
  VAR_12->tif_fd = VAR_9;
 return (VAR_12);
}
