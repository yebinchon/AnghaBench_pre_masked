
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xcb_connection_t ;
struct TYPE_2__ {int present; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 TYPE_1__* FUNC_1 (int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static bool FUNC_2(xcb_connection_t *VAR_5)
{
 bool VAR_6 = 1;

 if (!FUNC_1(VAR_5, &VAR_3)->present) {
  FUNC_0(VAR_0, "Missing SHM extension !");
  VAR_6 = 0;
 }

 if (!FUNC_1(VAR_5, &VAR_4)->present)
  FUNC_0(VAR_1, "Missing Xinerama extension !");

 if (!FUNC_1(VAR_5, &VAR_2)->present)
  FUNC_0(VAR_1, "Missing Randr extension !");

 return VAR_6;
}
