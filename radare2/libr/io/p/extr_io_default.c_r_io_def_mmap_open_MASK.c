
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {char* name; } ;
struct TYPE_7__ {int filename; } ;
typedef TYPE_1__ RIOMMapFileObj ;
typedef TYPE_2__ RIODesc ;
typedef int RIO ;


 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (int *,char const*,int,int) ;
 TYPE_2__* FUNC_2 (int *,int *,int ,int,int,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 (int,int *) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 void* FUNC_5 (char const*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static RIODesc *FUNC_7(RIO *VAR_1, const char *VAR_2, int VAR_3, int VAR_4) {
 FUNC_3 (VAR_1 && VAR_2, ((void*)0));
 RIOMMapFileObj *VAR_5 = FUNC_1 (VAR_1, VAR_2, VAR_3, VAR_4);
 if (!VAR_5) {
  return ((void*)0);
 }
 RIODesc *VAR_6 = FUNC_2 (VAR_1, &VAR_0, VAR_5->filename, VAR_3, VAR_4, VAR_5);
 if (!VAR_6->name) {
  VAR_6->name = FUNC_5 (VAR_2);
 }
 if (FUNC_4 (VAR_6->name, "file://")) {
  char *VAR_7 = VAR_6->name;
  VAR_6->name = FUNC_5 (VAR_7 + FUNC_6 ("file://"));
  FUNC_0 (VAR_7);
 }
 return VAR_6;
}
