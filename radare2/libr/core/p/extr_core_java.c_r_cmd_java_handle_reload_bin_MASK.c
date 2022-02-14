
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_9__ {int io; TYPE_1__* file; } ;
struct TYPE_8__ {int fd; } ;
typedef TYPE_2__ RCore ;
typedef int RBinJavaObj ;
typedef int RAnal ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (TYPE_2__*) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *,int ,int) ;
 char* FUNC_4 (char const*,char,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,char const*) ;
 scalar_t__ FUNC_7 (TYPE_2__*,char const*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (TYPE_2__*,int *,int *,int) ;
 int FUNC_10 (int ,int,int *,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;

__attribute__((used)) static int FUNC_13 (RCore *VAR_2, const char *VAR_3) {
 RAnal *VAR_4 = FUNC_1 (VAR_2);
 RBinJavaObj *VAR_5 = (RBinJavaObj *) FUNC_5 (VAR_4);
 const char *VAR_6 = VAR_3;
 ut64 VAR_7 = 0LL;
 ut64 VAR_8 = 0;
 ut8 * VAR_9 = ((void*)0);
 int VAR_10 = 0;

 if (*VAR_3 == ' ') {
  VAR_6 = FUNC_4 (VAR_6, ' ', -1);
 }
 if (!*VAR_3) {
  FUNC_8 (VAR_0+VAR_1);
  return 1;
 }

 VAR_7 = FUNC_7(VAR_2, VAR_6) ? FUNC_6 (VAR_2, VAR_6) : -1;
 if (*VAR_3 == ' ') {
  VAR_6 = FUNC_4 (VAR_6, ' ', -1);
 }
 VAR_8 = FUNC_7(VAR_2, VAR_6) ? FUNC_6 (VAR_2, VAR_6) : -1;



 if (VAR_8 == 0) {
  VAR_10 = FUNC_12 (VAR_2->io, VAR_2->file->fd);
  VAR_8 = FUNC_11 (VAR_2->io);
  VAR_9 = FUNC_2 (VAR_8);
  FUNC_3 (VAR_9, 0, VAR_8);
  FUNC_10 (VAR_2->io, VAR_7, VAR_9, VAR_8);
 }
 if (VAR_9 && VAR_5) {
  VAR_10 = FUNC_9 (VAR_2, VAR_5, VAR_9, VAR_8);
 }
 FUNC_0 (VAR_9);
 return VAR_10;
}
