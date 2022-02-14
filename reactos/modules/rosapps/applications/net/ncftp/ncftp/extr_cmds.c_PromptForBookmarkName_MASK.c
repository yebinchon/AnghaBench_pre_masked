
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int dfltname ;
typedef int bmname ;
struct TYPE_5__ {int host; } ;
struct TYPE_4__ {int bookmarkName; } ;
typedef TYPE_1__* BookmarkPtr ;


 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 TYPE_2__ VAR_0 ;
 int FUNC_4 (char*,...) ;
 int VAR_1 ;

int
FUNC_5(BookmarkPtr VAR_2)
{
 char VAR_3[64];
 char VAR_4[64];

 FUNC_0(VAR_3, sizeof(VAR_3), VAR_0.host);
 if (VAR_3[0] == '\0') {
  (void) FUNC_4("Enter a name for this bookmark: ");
 } else {
  (void) FUNC_4("Enter a name for this bookmark, or hit enter for \"%s\": ", VAR_3);
 }
 FUNC_3(VAR_1);
 (void) FUNC_1(VAR_4, sizeof(VAR_4), VAR_1);
 if (VAR_4[0] != '\0') {
  (void) FUNC_2(VAR_2->bookmarkName, VAR_4);
  return (0);
 } else if (VAR_3[0] != '\0') {
  (void) FUNC_2(VAR_2->bookmarkName, VAR_3);
  return (0);
 }
 return (-1);
}
