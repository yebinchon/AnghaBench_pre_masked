
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int fz_context ;
struct TYPE_9__ {int password_sem; int thread; int path; void* cookie; int * error; int * progress; int ctx; TYPE_1__* mu; } ;
struct TYPE_8__ {int * ctx; } ;
typedef int MuOfficeLoadingProgressFn ;
typedef int MuOfficeLoadingErrorFn ;
typedef TYPE_1__ MuOfficeLib ;
typedef TYPE_2__ MuOfficeDoc ;
typedef int MuError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char const*) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ,TYPE_2__*) ;
 int FUNC_6 (int *) ;

MuError FUNC_7( MuOfficeLib *VAR_5,
     const char *VAR_6,
     MuOfficeLoadingProgressFn *VAR_7,
     MuOfficeLoadingErrorFn *VAR_8,
     void *VAR_9,
     MuOfficeDoc **VAR_10)
{
 MuOfficeDoc *VAR_11;
 fz_context *VAR_12;

 if (VAR_5 == ((void*)0) || VAR_10 == ((void*)0))
  return VAR_2;

 *VAR_10 = ((void*)0);

 VAR_11 = FUNC_0(1, sizeof(*VAR_11));
 if (VAR_11 == ((void*)0))
  return VAR_3;

 VAR_12 = VAR_5->ctx;
 VAR_11->mu = VAR_5;
 VAR_11->ctx = FUNC_2(VAR_12);
 VAR_11->progress = VAR_7;
 VAR_11->error = VAR_8;
 VAR_11->cookie = VAR_9;
 VAR_11->path = FUNC_3(VAR_12, VAR_6);
 if (FUNC_4(&VAR_11->password_sem))
  goto fail;

 if (FUNC_5(&VAR_11->thread, VAR_4, VAR_11))
  goto fail;

 *VAR_10 = VAR_11;

 return VAR_0;
fail:
 FUNC_6(&VAR_11->password_sem);
 FUNC_1(VAR_11);

 return VAR_1;
}
