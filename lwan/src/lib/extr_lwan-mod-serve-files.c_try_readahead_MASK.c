
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serve_files_priv {size_t read_ahead; } ;


 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (int,int ,size_t) ;

__attribute__((used)) static void
FUNC_2(const struct serve_files_priv *VAR_0, int VAR_1, size_t VAR_2)
{
    if (VAR_2 > VAR_0->read_ahead)
        VAR_2 = VAR_0->read_ahead;

    if (FUNC_0(VAR_2))
        FUNC_1(VAR_1, 0, VAR_2);
}
