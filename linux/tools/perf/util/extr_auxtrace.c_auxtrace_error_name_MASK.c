
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char** VAR_1 ;

__attribute__((used)) static const char *FUNC_0(int VAR_2)
{
 const char *VAR_3 = ((void*)0);

 if (VAR_2 < VAR_0)
  VAR_3 = VAR_1[VAR_2];
 if (!VAR_3)
  VAR_3 = "unknown AUX";
 return VAR_3;
}
