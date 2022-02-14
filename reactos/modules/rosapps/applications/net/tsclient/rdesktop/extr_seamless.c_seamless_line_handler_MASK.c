
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RDPCLIENT ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,void*) ;
 int FUNC_1 (char*,char const*) ;

__attribute__((used)) static BOOL
FUNC_2(RDPCLIENT * VAR_1, const char *VAR_2, void *VAR_3)
{
 if (!FUNC_0(VAR_1, VAR_2, VAR_3))
 {
  FUNC_1("SeamlessRDP: Invalid request:%s\n", VAR_2);
 }
 return VAR_0;
}
