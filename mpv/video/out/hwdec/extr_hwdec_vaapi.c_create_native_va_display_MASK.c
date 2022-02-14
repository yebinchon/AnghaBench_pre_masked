
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct va_create_native {int * (* create ) (struct ra*) ;int name; } ;
struct ra {int dummy; } ;
struct mp_log {int dummy; } ;
typedef int VADisplay ;


 int FUNC_0 (struct va_create_native*) ;
 struct va_create_native* VAR_0 ;
 int FUNC_1 (struct mp_log*,char*,int ) ;
 int * FUNC_2 (struct ra*) ;

__attribute__((used)) static VADisplay *FUNC_3(struct ra *VAR_1, struct mp_log *VAR_2)
{
    for (int VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
        const struct va_create_native *VAR_4 = &VAR_0[VAR_3];
        FUNC_1(VAR_2, "Trying to open a %s VA display...\n", VAR_4->name);
        VADisplay *VAR_5 = VAR_4->create(VAR_1);
        if (VAR_5)
            return VAR_5;
    }
    return ((void*)0);
}
