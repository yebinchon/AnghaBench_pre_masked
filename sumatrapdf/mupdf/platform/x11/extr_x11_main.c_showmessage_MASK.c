
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct timeval {int dummy; } ;
typedef int pdfapp_t ;
struct TYPE_6__ {int tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_5__ {int tv_usec; int tv_sec; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct timeval*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct timeval*,TYPE_2__*,TYPE_1__*) ;
 TYPE_2__ VAR_3 ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static void FUNC_3(pdfapp_t *VAR_5, int VAR_6, char *VAR_7)
{
 struct timeval VAR_8;

 VAR_1 = 1;
 VAR_2 = 0;

 FUNC_0(VAR_0, VAR_7, sizeof VAR_0);

 if ((!VAR_4.tv_sec && !VAR_4.tv_usec) || VAR_3.tv_sec < VAR_6)
 {
  VAR_3.tv_sec = VAR_6;
  VAR_3.tv_usec = 0;
  FUNC_1(&VAR_8, ((void*)0));
  FUNC_2(&VAR_8, &VAR_3, &VAR_4);
 }
}
