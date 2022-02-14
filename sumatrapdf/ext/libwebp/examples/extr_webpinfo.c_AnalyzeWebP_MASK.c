
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ WebPInfoStatus ;
struct TYPE_8__ {int quiet_; scalar_t__ show_summary_; } ;
typedef TYPE_1__ WebPInfo ;
typedef int WebPData ;
typedef int MemBuffer ;
typedef int ChunkData ;


 int FUNC_0 (int *,int const*) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_1__* const,int *,int *) ;
 scalar_t__ FUNC_3 (TYPE_1__* const,int *) ;
 scalar_t__ FUNC_4 (int *,TYPE_1__* const) ;
 int FUNC_5 (TYPE_1__* const) ;
 scalar_t__ FUNC_6 (TYPE_1__* const) ;
 scalar_t__ VAR_0 ;
 int FUNC_7 (char*) ;

__attribute__((used)) static WebPInfoStatus FUNC_8(WebPInfo* const VAR_1,
                                  const WebPData* VAR_2) {
  ChunkData VAR_3;
  MemBuffer VAR_4;
  WebPInfoStatus VAR_5 = VAR_0;

  FUNC_0(&VAR_4, VAR_2);
  VAR_5 = FUNC_3(VAR_1, &VAR_4);
  if (VAR_5 != VAR_0) goto Error;


  while (VAR_5 == VAR_0 && FUNC_1(&VAR_4) > 0) {
    VAR_5 = FUNC_2(VAR_1, &VAR_4, &VAR_3);
    if (VAR_5 != VAR_0) goto Error;
    VAR_5 = FUNC_4(&VAR_3, VAR_1);
  }
  if (VAR_5 != VAR_0) goto Error;
  if (VAR_1->show_summary_) FUNC_5(VAR_1);


  VAR_5 = FUNC_6(VAR_1);

 Error:
  if (!VAR_1->quiet_) {
    if (VAR_5 == VAR_0) {
      FUNC_7("No error detected.\n");
    } else {
      FUNC_7("Errors detected.\n");
    }
  }
  return VAR_5;
}
