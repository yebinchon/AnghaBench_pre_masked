
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {unsigned int num_channels; scalar_t__ mcs_userid; } ;
typedef int STREAM ;
typedef TYPE_1__ RDPCLIENT ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,char*,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,scalar_t__) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*) ;

BOOL
FUNC_9(RDPCLIENT * VAR_4, char *VAR_5, char * VAR_6, STREAM VAR_7)
{
 unsigned int VAR_8;

 if (!FUNC_0(VAR_4, VAR_5, VAR_6))
  return VAR_0;

 if (!FUNC_7(VAR_4, VAR_7) || !FUNC_4(VAR_4, VAR_7))
  goto error;

 if (!FUNC_8(VAR_4) || !FUNC_5(VAR_4))
  goto error;

 if (!FUNC_2(VAR_4, &VAR_4->mcs_userid))
  goto error;

 if (!FUNC_6(VAR_4, VAR_4->mcs_userid + VAR_2) || !FUNC_3(VAR_4))
  goto error;

 if (!FUNC_6(VAR_4, VAR_1) || !FUNC_3(VAR_4))
  goto error;

 for (VAR_8 = 0; VAR_8 < VAR_4->num_channels; VAR_8++)
 {
  if (!FUNC_6(VAR_4, VAR_1 + 1 + VAR_8) || !FUNC_3(VAR_4))
   goto error;
 }
 return VAR_3;

 error:
 FUNC_1(VAR_4);
 return VAR_0;
}
