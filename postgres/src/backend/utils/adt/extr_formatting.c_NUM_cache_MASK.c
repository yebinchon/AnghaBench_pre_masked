
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int text ;
struct TYPE_8__ {int zero_end; int zero_start; int multi; int need_locale; int pre_lsign_num; int post; int pre; int lsign; int flag; } ;
struct TYPE_10__ {TYPE_1__ Num; int * format; } ;
struct TYPE_9__ {int zero_end; int zero_start; int multi; int need_locale; int pre_lsign_num; int post; int pre; int lsign; int flag; } ;
typedef TYPE_2__ NUMDesc ;
typedef TYPE_3__ NUMCacheEntry ;
typedef int FormatNode ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,char*,int ,int *,int ,int ,TYPE_2__*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static FormatNode *
FUNC_7(int VAR_4, NUMDesc *VAR_5, text *VAR_6, bool *VAR_7)
{
 FormatNode *VAR_8 = ((void*)0);
 char *VAR_9;

 VAR_9 = FUNC_5(VAR_6);

 if (VAR_4 > VAR_0)
 {




  VAR_8 = (FormatNode *) FUNC_2((VAR_4 + 1) * sizeof(FormatNode));

  *VAR_7 = 1;

  FUNC_6(VAR_5);

  FUNC_3(VAR_8, VAR_9, VAR_3,
      ((void*)0), VAR_2, VAR_1, VAR_5);
 }
 else
 {



  NUMCacheEntry *VAR_10 = FUNC_0(VAR_9);

  *VAR_7 = 0;

  VAR_8 = VAR_10->format;




  VAR_5->flag = VAR_10->Num.flag;
  VAR_5->lsign = VAR_10->Num.lsign;
  VAR_5->pre = VAR_10->Num.pre;
  VAR_5->post = VAR_10->Num.post;
  VAR_5->pre_lsign_num = VAR_10->Num.pre_lsign_num;
  VAR_5->need_locale = VAR_10->Num.need_locale;
  VAR_5->multi = VAR_10->Num.multi;
  VAR_5->zero_start = VAR_10->Num.zero_start;
  VAR_5->zero_end = VAR_10->Num.zero_end;
 }






 FUNC_4(VAR_9);
 return VAR_8;
}
