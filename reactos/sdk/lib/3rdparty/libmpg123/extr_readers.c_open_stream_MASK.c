
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int filelen; int filept; int flags; } ;
struct TYPE_6__ {TYPE_1__ rdat; int err; int icy; } ;
typedef TYPE_2__ mpg123_handle ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char const*,int) ;
 int VAR_6 ;
 int FUNC_2 (char*,char const*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;

int FUNC_5(mpg123_handle *VAR_7, const char *VAR_8, int VAR_9)
{
 int VAR_10 = 1;
 int VAR_11;

 FUNC_0(&VAR_7->icy);

 if(!VAR_8)
 {
  VAR_11 = VAR_9;
  VAR_10 = 0;
 }



 else if((VAR_11 = FUNC_1(VAR_8, VAR_4|(0))) < 0)
 {
  if(VAR_2) FUNC_2("Cannot open file %s: %s", VAR_8, FUNC_4(VAR_6));
  VAR_7->err = VAR_0;
  return VAR_1;
 }


 VAR_7->rdat.filelen = -1;
 VAR_7->rdat.filept = VAR_11;
 VAR_7->rdat.flags = 0;
 if(VAR_10) VAR_7->rdat.flags |= VAR_5;

 return FUNC_3(VAR_7);
}
