
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libvlc_media_t ;


 int VAR_0 ;
 int * FUNC_0 (int ,char const*) ;
 int * FUNC_1 (int ,char const*) ;
 int * FUNC_2 (char const*,char*) ;

__attribute__((used)) static inline libvlc_media_t *FUNC_3(const char *VAR_1)
{
 return (VAR_1 && FUNC_2(VAR_1, "://") != ((void*)0))
         ? FUNC_0(VAR_0, VAR_1)
         : FUNC_1(VAR_0, VAR_1);
}
