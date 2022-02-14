
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_x11_state {int dummy; } ;
typedef int Window ;
typedef int Atom ;


 int FUNC_0 (void*) ;
 int FUNC_1 (void*,void*,size_t) ;
 void* FUNC_2 (struct vo_x11_state*,int ,int ,int ,int,int*) ;

__attribute__((used)) static bool FUNC_3(struct vo_x11_state *VAR_0, Window VAR_1,
                                  Atom VAR_2, Atom VAR_3, int VAR_4,
                                  void *VAR_5, size_t VAR_6)
{
    bool VAR_7 = 0;
    int VAR_8;
    void *VAR_9 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, &VAR_8);
    if (VAR_9) {
        size_t VAR_10 = VAR_4 == 32 ? sizeof(long) : VAR_4 / 8;
        if (VAR_6 / VAR_10 >= VAR_8) {
            FUNC_1(VAR_5, VAR_9, VAR_6);
            VAR_7 = 1;
        }
        FUNC_0(VAR_9);
    }
    return VAR_7;
}
