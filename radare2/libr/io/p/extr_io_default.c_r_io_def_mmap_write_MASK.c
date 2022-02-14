
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char ut8 ;
typedef int ut64 ;
struct TYPE_9__ {int off; } ;
struct TYPE_8__ {int obsz; int fd; TYPE_1__* data; } ;
struct TYPE_7__ {int perm; int filename; scalar_t__ buf; int fd; scalar_t__ rawio; } ;
typedef TYPE_1__ RIOMMapFileObj ;
typedef TYPE_2__ RIODesc ;
typedef TYPE_3__ RIO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int,int ) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*,char const*,int) ;
 int FUNC_5 (char*,int,int) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,int const,char const*,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,char*,int const) ;
 int FUNC_12 (int ,char const*,int const) ;

__attribute__((used)) static int FUNC_13(RIO *VAR_2, RIODesc *VAR_3, const ut8 *VAR_4, int VAR_5) {
 FUNC_10 (VAR_2 && VAR_3 && VAR_3->data && VAR_4, -1);

 int VAR_6 = -1;
 ut64 VAR_7 = VAR_2->off;
 RIOMMapFileObj *VAR_8 = VAR_3->data;
 if (VAR_8->rawio) {
  if (VAR_3->obsz) {
   char *VAR_9;
   int VAR_10;

   const int VAR_11 = VAR_3->obsz;

   ut64 VAR_12 = VAR_2->off - (VAR_2->off % VAR_11);
   int VAR_13 = VAR_2->off - VAR_12;
   if (VAR_13 < 0) {
    return -1;
   }
   VAR_10 = VAR_5 + (VAR_11 - (VAR_5 % VAR_11));
   VAR_9 = FUNC_3 (VAR_10 + VAR_11);
   if (VAR_9) {
    int VAR_14;
    FUNC_5 (VAR_9, 0xff, VAR_10+VAR_11);
    for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14 += VAR_11) {
     (void)FUNC_2 (VAR_8->fd, VAR_12 + VAR_14, VAR_1);
     (void)FUNC_11 (VAR_8->fd, VAR_9 + VAR_14, VAR_11);
    }
    FUNC_4 (VAR_9+VAR_13, VAR_4, VAR_5);
    for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14 += VAR_11) {
     (void)FUNC_2 (VAR_8->fd, VAR_12 + VAR_14, VAR_1);
     VAR_6 = FUNC_12 (VAR_8->fd, VAR_9 + VAR_14, VAR_11);
     if (VAR_6 != VAR_11) {
      FUNC_1 (VAR_9);
      return VAR_6;
     }
    }
   }
   FUNC_1 (VAR_9);
   return VAR_5;
  }
  if (FUNC_2 (VAR_8->fd, VAR_7, 0) < 0) {
   return -1;
  }
  VAR_6 = FUNC_12 (VAR_8->fd, VAR_4, VAR_5);
  return VAR_6;
 }

 if (VAR_8 && VAR_8->buf) {
  if (!(VAR_8->perm & VAR_0)) {
   return -1;
  }
  if ( (VAR_5 + VAR_7 > FUNC_6 (VAR_8->buf)) || FUNC_6 (VAR_8->buf) == 0) {
   ut64 VAR_15 = VAR_5 + VAR_7;
   FUNC_8 (VAR_8->filename, VAR_15);
  }
 }

 VAR_6 = FUNC_7 (VAR_8->filename, VAR_2->off, VAR_4, VAR_5);
 if (VAR_6 != VAR_5) {

  if (FUNC_2 (VAR_3->fd, VAR_7, 0) < 0) {
   return -1;
  }
  VAR_6 = FUNC_12 (VAR_3->fd, VAR_4, VAR_5);
 }
 if (!FUNC_9 (VAR_8) ) {
  FUNC_0 ("io_def_mmap: failed to refresh the def_mmap backed buffer.\n");

 }
 return VAR_6;
}
