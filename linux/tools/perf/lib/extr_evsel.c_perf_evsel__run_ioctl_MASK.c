
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_evsel {int fd; } ;


 int FUNC_0 (struct perf_evsel*,int,int) ;
 int FUNC_1 (int,int,void*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct perf_evsel *VAR_0,
     int VAR_1, void *VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < FUNC_2(VAR_0->fd); VAR_3++) {
  for (VAR_4 = 0; VAR_4 < FUNC_3(VAR_0->fd); VAR_4++) {
   int VAR_5 = FUNC_0(VAR_0, VAR_3, VAR_4),
       VAR_6 = FUNC_1(VAR_5, VAR_1, VAR_2);

   if (VAR_6)
    return VAR_6;
  }
 }

 return 0;
}
