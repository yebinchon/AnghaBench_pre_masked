
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nk_image {int dummy; } ;
typedef scalar_t__ GLuint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int,scalar_t__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int,int,int ,int ,int ,unsigned char*) ;
 int FUNC_5 (int ,int ,int ) ;
 struct nk_image FUNC_6 (int) ;
 int FUNC_7 (unsigned char*) ;
 unsigned char* FUNC_8 (char const*,int*,int*,int*,int ) ;

__attribute__((used)) static struct nk_image
FUNC_9(const char *VAR_10)
{
    int VAR_11,VAR_12,VAR_13;
    GLuint VAR_14;
    unsigned char *VAR_15 = FUNC_8(VAR_10, &VAR_11, &VAR_12, &VAR_13, 0);
    if (!VAR_15) FUNC_0("[SDL]: failed to load image: %s", VAR_10);

    FUNC_2(1, &VAR_14);
    FUNC_1(VAR_4, VAR_14);
    FUNC_5(VAR_4, VAR_6, VAR_1);
    FUNC_5(VAR_4, VAR_5, VAR_1);
    FUNC_5(VAR_4, VAR_7, VAR_0);
    FUNC_5(VAR_4, VAR_8, VAR_0);
    FUNC_4(VAR_4, 0, VAR_3, VAR_11, VAR_12, 0, VAR_2, VAR_9, VAR_15);
    FUNC_3(VAR_4);
    FUNC_7(VAR_15);
    return FUNC_6((int)VAR_14);
}
