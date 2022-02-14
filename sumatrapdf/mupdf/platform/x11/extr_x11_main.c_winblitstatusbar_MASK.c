
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int pdfapp_t ;
struct TYPE_4__ {char* search; int pageno; int pagecount; int winw; scalar_t__ issearching; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int) ;
 TYPE_1__ VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char*,int,char*,int,int) ;
 int FUNC_4 (char*,char*,char*) ;
 int FUNC_5 (TYPE_1__*,int,int,char*) ;
 int FUNC_6 (TYPE_1__*,int,int,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_7(pdfapp_t *VAR_7)
{
 if (VAR_0.issearching)
 {
  char VAR_8[sizeof(VAR_0.search) + 50];
  FUNC_4(VAR_8, "Search: %s", VAR_0.search);
  FUNC_1(VAR_4, VAR_5, FUNC_0(VAR_4, VAR_6));
  FUNC_2(0, 0, VAR_0.winw, 30);
  FUNC_5(&VAR_0, 10, 20, VAR_8);
 }
 else if (VAR_2)
 {
  FUNC_1(VAR_4, VAR_5, FUNC_0(VAR_4, VAR_6));
  FUNC_2(0, 0, VAR_0.winw, 30);
  FUNC_5(&VAR_0, 10, 20, VAR_1);
 }
 else if (VAR_3)
 {
  char VAR_9[42];
  FUNC_3(VAR_9, sizeof VAR_9, "Page %d/%d", VAR_0.pageno, VAR_0.pagecount);
  FUNC_6(&VAR_0, 10, 20, VAR_9);
 }
}
