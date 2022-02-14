
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16 ;
struct TYPE_5__ {int mcs_userid; } ;
typedef int * STREAM ;
typedef TYPE_1__ RDPCLIENT ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static BOOL
FUNC_6(RDPCLIENT * VAR_2, uint16 VAR_3)
{
 STREAM VAR_4;

 FUNC_0(("Sending CJRQ for channel #%d\n", VAR_3));

 VAR_4 = FUNC_1(VAR_2, 5);

 if(VAR_4 == ((void*)0))
  return VAR_0;

 FUNC_4(VAR_4, (VAR_1 << 2));
 FUNC_3(VAR_4, VAR_2->mcs_userid);
 FUNC_3(VAR_4, VAR_3);

 FUNC_5(VAR_4);
 return FUNC_2(VAR_2, VAR_4);
}
