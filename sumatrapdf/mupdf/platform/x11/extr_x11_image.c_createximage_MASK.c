
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ shmid; char* shmaddr; int readOnly; } ;
typedef TYPE_1__ XShmSegmentInfo ;
struct TYPE_12__ {int bytes_per_line; int height; char* data; } ;
typedef TYPE_2__ XImage ;
typedef int Visual ;
struct TYPE_13__ {scalar_t__ useshm; } ;
typedef int Status ;
typedef int Display ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (int *,int *,int,int ,int ,int *,int,int,int,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 TYPE_2__* FUNC_3 (int *,int *,int,int ,int *,TYPE_1__*,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int VAR_4 ;
 int FUNC_6 () ;
 int FUNC_7 (int ,char*) ;
 TYPE_3__ VAR_5 ;
 char* FUNC_8 (int) ;
 char* FUNC_9 (scalar_t__,int *,int ) ;
 int FUNC_10 (scalar_t__,int ,int *) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (int ,int,int) ;
 int VAR_6 ;

__attribute__((used)) static XImage *
FUNC_13(Display *VAR_7, Visual *VAR_8, XShmSegmentInfo *VAR_9, int VAR_10, int VAR_11, int VAR_12)
{
 XImage *VAR_13;
 Status VAR_14;

 if (!FUNC_4(VAR_7))
  goto fallback;
 if (!VAR_5.useshm)
  goto fallback;

 VAR_13 = FUNC_3(VAR_7, VAR_8, VAR_10, VAR_4, ((void*)0), VAR_9, VAR_11, VAR_12);
 if (!VAR_13)
 {
  FUNC_7(VAR_6, "warn: could not XShmCreateImage\n");
  goto fallback;
 }

 VAR_9->shmid = FUNC_12(VAR_2,
  VAR_13->bytes_per_line * VAR_13->height,
  VAR_1 | 0777);
 if (VAR_9->shmid < 0)
 {
  FUNC_1(VAR_13);
  FUNC_7(VAR_6, "warn: could not shmget\n");
  goto fallback;
 }

 VAR_13->data = VAR_9->shmaddr = FUNC_9(VAR_9->shmid, ((void*)0), 0);
 if (VAR_13->data == (char*)-1)
 {
  FUNC_1(VAR_13);
  FUNC_7(VAR_6, "warn: could not shmat\n");
  goto fallback;
 }

 VAR_9->readOnly = VAR_0;
 VAR_14 = FUNC_2(VAR_7, VAR_9);
 if (!VAR_14)
 {
  FUNC_11(VAR_9->shmaddr);
  FUNC_1(VAR_13);
  FUNC_7(VAR_6, "warn: could not XShmAttach\n");
  goto fallback;
 }

 FUNC_5(VAR_7, VAR_0);

 FUNC_10(VAR_9->shmid, VAR_3, ((void*)0));

 return VAR_13;

fallback:
 VAR_5.useshm = 0;

 VAR_13 = FUNC_0(VAR_7, VAR_8, VAR_10, VAR_4, 0, ((void*)0), VAR_11, VAR_12, 32, 0);
 if (!VAR_13)
 {
  FUNC_7(VAR_6, "fail: could not XCreateImage");
  FUNC_6();
 }

 VAR_13->data = FUNC_8(VAR_12 * VAR_13->bytes_per_line);
 if (!VAR_13->data)
 {
  FUNC_7(VAR_6, "fail: could not malloc");
  FUNC_6();
 }

 return VAR_13;
}
