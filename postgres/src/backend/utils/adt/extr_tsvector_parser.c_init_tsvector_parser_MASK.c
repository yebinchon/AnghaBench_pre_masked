
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TSVectorParseStateData {int dummy; } ;
struct TYPE_3__ {char* prsbuf; char* bufstart; int len; char* word; int oprisdelim; int is_tsquery; int is_web; int eml; } ;
typedef TYPE_1__* TSVectorParseState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;

TSVectorParseState
FUNC_2(char *VAR_3, int VAR_4)
{
 TSVectorParseState VAR_5;

 VAR_5 = (TSVectorParseState) FUNC_0(sizeof(struct TSVectorParseStateData));
 VAR_5->prsbuf = VAR_3;
 VAR_5->bufstart = VAR_3;
 VAR_5->len = 32;
 VAR_5->word = (char *) FUNC_0(VAR_5->len);
 VAR_5->eml = FUNC_1();
 VAR_5->oprisdelim = (VAR_4 & VAR_2) != 0;
 VAR_5->is_tsquery = (VAR_4 & VAR_0) != 0;
 VAR_5->is_web = (VAR_4 & VAR_1) != 0;

 return VAR_5;
}
