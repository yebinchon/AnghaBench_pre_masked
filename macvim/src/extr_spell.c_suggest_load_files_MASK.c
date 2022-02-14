
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef scalar_t__ time_t ;
struct TYPE_14__ {scalar_t__ sl_sugtime; int sl_sidxs; int sl_sbyts; int sl_fidxs; int sl_fbyts; int * sl_sugbuf; scalar_t__ sl_fname; scalar_t__ sl_sugloaded; } ;
typedef TYPE_2__ slang_T ;
typedef int linenr_T ;
struct TYPE_15__ {TYPE_2__* lp_slang; } ;
typedef TYPE_3__ langp_T ;
struct TYPE_16__ {scalar_t__ ga_len; scalar_t__ ga_data; } ;
typedef TYPE_4__ garray_T ;
typedef int char_u ;
struct TYPE_17__ {TYPE_1__* w_s; } ;
struct TYPE_12__ {int ga_len; } ;
struct TYPE_13__ {TYPE_11__ b_langp; } ;
typedef int FILE ;


 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_1 (TYPE_11__,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int*,char*) ;
 scalar_t__ FUNC_3 (int*,int ,int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (char*) ;
 TYPE_9__* VAR_8 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int*,char*) ;
 int FUNC_7 (TYPE_4__*) ;
 scalar_t__ FUNC_8 (TYPE_4__*,int) ;
 int FUNC_9 (TYPE_4__*,int,int) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 void* FUNC_12 (int *) ;
 int * FUNC_13 (char*,char*) ;
 scalar_t__ FUNC_14 (int *,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int * FUNC_15 () ;
 int FUNC_16 (TYPE_2__*) ;
 scalar_t__ FUNC_17 (int *,int *,int *,int ,int ) ;
 int FUNC_18 (int ,int ) ;
 int* FUNC_19 (scalar_t__,char) ;

__attribute__((used)) static void
FUNC_20()
{
    langp_T *VAR_9;
    int VAR_10;
    slang_T *VAR_11;
    char_u *VAR_12;
    FILE *VAR_13;
    char_u VAR_14[VAR_2];
    int VAR_15;
    time_t VAR_16;
    int VAR_17;
    int VAR_18;
    garray_T VAR_19;
    int VAR_20;


    for (VAR_10 = 0; VAR_10 < VAR_8->w_s->b_langp.ga_len; ++VAR_10)
    {
 VAR_9 = FUNC_1(VAR_8->w_s->b_langp, VAR_10);
 VAR_11 = VAR_9->lp_slang;
 if (VAR_11->sl_sugtime != 0 && !VAR_11->sl_sugloaded)
 {



     VAR_11->sl_sugloaded = VAR_4;

     VAR_12 = FUNC_19(VAR_11->sl_fname, '.');
     if (VAR_12 == ((void*)0) || FUNC_6(VAR_12, ".spl") != 0)
  continue;
     FUNC_2(VAR_12, ".sug");
     VAR_13 = FUNC_13((char *)VAR_11->sl_fname, "r");
     if (VAR_13 == ((void*)0))
  goto nextone;




     for (VAR_15 = 0; VAR_15 < VAR_6; ++VAR_15)
  VAR_14[VAR_15] = FUNC_12(VAR_13);
     if (FUNC_3(VAR_14, VAR_5, VAR_6) != 0)
     {
  FUNC_0(FUNC_4("E778: This does not look like a .sug file: %s"),
            VAR_11->sl_fname);
  goto nextone;
     }
     VAR_20 = FUNC_12(VAR_13);
     if (VAR_20 < VAR_7)
     {
  FUNC_0(FUNC_4("E779: Old .sug file, needs to be updated: %s"),
            VAR_11->sl_fname);
  goto nextone;
     }
     else if (VAR_20 > VAR_7)
     {
  FUNC_0(FUNC_4("E780: .sug file is for newer version of Vim: %s"),
            VAR_11->sl_fname);
  goto nextone;
     }



     VAR_16 = FUNC_11(VAR_13);
     if (VAR_16 != VAR_11->sl_sugtime)
     {
  FUNC_0(FUNC_4("E781: .sug file doesn't match .spl file: %s"),
            VAR_11->sl_fname);
  goto nextone;
     }





     if (FUNC_17(VAR_13, &VAR_11->sl_sbyts, &VAR_11->sl_sidxs,
              VAR_1, 0) != 0)
     {
someerror:
  FUNC_0(FUNC_4("E782: error while reading .sug file: %s"),
            VAR_11->sl_fname);
  FUNC_16(VAR_11);
  goto nextone;
     }
     VAR_11->sl_sugbuf = FUNC_15();
     if (VAR_11->sl_sugbuf == ((void*)0))
  goto someerror;

     VAR_17 = FUNC_10(VAR_13);
     if (VAR_17 < 0)
  goto someerror;



     FUNC_9(&VAR_19, 1, 100);
     for (VAR_18 = 0; VAR_18 < VAR_17; ++VAR_18)
     {
  VAR_19.ga_len = 0;
  for (;;)
  {
      VAR_20 = FUNC_12(VAR_13);
      if (VAR_20 < 0 || FUNC_8(&VAR_19, 1) == VAR_0)
   goto someerror;
      ((char_u *)VAR_19.ga_data)[VAR_19.ga_len++] = VAR_20;
      if (VAR_20 == VAR_3)
   break;
  }
  if (FUNC_14(VAR_11->sl_sugbuf, (linenr_T)VAR_18,
      VAR_19.ga_data, VAR_19.ga_len, VAR_4) == VAR_0)
      goto someerror;
     }
     FUNC_7(&VAR_19);





     FUNC_18(VAR_11->sl_fbyts, VAR_11->sl_fidxs);
     FUNC_18(VAR_11->sl_sbyts, VAR_11->sl_sidxs);

nextone:
     if (VAR_13 != ((void*)0))
  FUNC_5(VAR_13);
     FUNC_2(VAR_12, ".spl");
 }
    }
}
