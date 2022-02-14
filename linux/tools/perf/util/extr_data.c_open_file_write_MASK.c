
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int path; } ;
struct perf_data {TYPE_1__ file; } ;
typedef int sbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int FUNC_3(struct perf_data *VAR_8)
{
 int VAR_9;
 char VAR_10[VAR_4];

 VAR_9 = FUNC_0(VAR_8->file.path, VAR_1|VAR_2|VAR_3|VAR_0,
    VAR_5|VAR_6);

 if (VAR_9 < 0)
  FUNC_1("failed to open %s : %s\n", VAR_8->file.path,
   FUNC_2(VAR_7, VAR_10, sizeof(VAR_10)));

 return VAR_9;
}
