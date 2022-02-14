
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WebPMux ;
typedef int WebPData ;
typedef int W_CHAR ;


 int FUNC_0 (char const* const,int *) ;
 int FUNC_1 (int ,char*,int const*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(const char* const VAR_1, WebPMux** VAR_2) {
  WebPData VAR_3;
  FUNC_4(VAR_2 != ((void*)0));
  if (!FUNC_0(VAR_1, &VAR_3)) return 0;
  *VAR_2 = FUNC_3(&VAR_3, 1);
  FUNC_2(&VAR_3);
  if (*VAR_2 != ((void*)0)) return 1;
  FUNC_1(VAR_0, "Failed to create mux object from file %s.\n",
           (const W_CHAR*)VAR_1);
  return 0;
}
